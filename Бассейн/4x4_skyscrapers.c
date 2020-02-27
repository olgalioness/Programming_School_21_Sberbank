#include <string.h>

void collapseState(int **solution, short cell_row, short cell_col, short state);
void collapseCollateral(int **solution, short cell_row, short cell_col);
void collapseUnique(int **solution, short *finished);
void collapseRows(int **solution, short *finished);
void collapseColumns(int **solution, short *finished);
void useClues(int **solution, int *clues);
void reuseClues(int **solution, int *clues);
short countWhitespaces(char *buffer, short end);

void collapseState(int **solution, short cell_row, short cell_col, short state) {
    /* check if the current state is already collapsed */
    if(solution[cell_row][cell_col] / 10 == 0) return;
    
    short digits[4] = {0};
    short size = 0;
    short number = solution[cell_row][cell_col];
    do {
        digits[size++] = number % 10;
    } while(number /= 10);
    
    short multiplier = 1;
    for(short i = 0; i < 4; ++i)
        if(digits[i] == 0) 
            break;
        else if(digits[i] == state)
            continue;
        else {
            number += digits[i] * multiplier;
            multiplier *= 10;
        }
    solution[cell_row][cell_col] = number;
    
    /* if we've just collapsed the state we also
       need to collapse affected row and col */
    if(number / 10 == 0)
        collapseCollateral(solution, cell_row, cell_col);
}

void collapseCollateral(int **solution, short cell_row, short cell_col) {
    short state = solution[cell_row][cell_col];
    
    /* collapse upper cells */
    for(short i = cell_row - 1; i >= 0; --i)
        collapseState(solution, i, cell_col, state);
    /* collapse lower cells */
    for(short i = cell_row + 1; i < 4; ++i)
        collapseState(solution, i, cell_col, state);
    /* collapse cells to the left */
    for(short j = cell_col - 1; j >= 0; --j)
        collapseState(solution, cell_row, j, state);
    /* collapse cells to the right */
    for(short j = cell_col + 1; j < 4; ++j)
        collapseState(solution, cell_row, j, state);
}

void collapseUnique(int **solution, short *finished) {
    /* if only one cell in a row or col has a certain digit
       it can be collapsed down to this digit */
    collapseRows(solution, finished);
    collapseColumns(solution, finished);
}

void collapseRows(int **solution, short *finished) {
    for(short i = 0; i < 4; ++i) {
        char buffer[32];
        /* merge row cells into one string and look for unique digits */
        sprintf(buffer, "%d %d %d %d", solution[i][0], solution[i][1], \
            solution[i][2], solution[i][3]);
        
        /* the algorithm works by finding the first and the last
           instance of a digit, if they match - this digit is unique */
        char *first = strchr(buffer, '1');
        char *last = strrchr(buffer, '1');
        if(first == last != NULL) {
            short j = countWhitespaces(buffer, first - buffer);
            if(solution[i][j] / 10 != 0) {
                collapseState(solution, i, j, 2);
                collapseState(solution, i, j, 3);
                collapseState(solution, i, j, 4);
                *finished = 0;
            }
        }
        
        first = strchr(buffer, '2');
        last = strrchr(buffer, '2');
        if(first == last != NULL) {
            short j = countWhitespaces(buffer, first - buffer);
            if(solution[i][j] / 10 != 0) {
                collapseState(solution, i, j, 1);
                collapseState(solution, i, j, 3);
                collapseState(solution, i, j, 4);
                *finished = 0;
            }
        }
        
        first = strchr(buffer, '3');
        last = strrchr(buffer, '3');
        if(first == last != NULL) {
            short j = countWhitespaces(buffer, first - buffer);
            if(solution[i][j] / 10 != 0) {
                collapseState(solution, i, j, 1);
                collapseState(solution, i, j, 2);
                collapseState(solution, i, j, 4);
                *finished = 0;
            }
        }
        
        first = strchr(buffer, '4');
        last = strrchr(buffer, '4');
        if(first == last != NULL) {
            short j = countWhitespaces(buffer, first - buffer);
            if(solution[i][j] / 10 != 0) { 
                collapseState(solution, i, j, 1);
                collapseState(solution, i, j, 2);
                collapseState(solution, i, j, 3);
                *finished = 0;
            }
        }
    }
}

void collapseColumns(int **solution, short *finished) {
    for(short j = 0; j < 4; ++j) {
        char buffer[32];
        /* merge col cells into one string and look for unique digits */
        sprintf(buffer, "%d %d %d %d", solution[0][j], solution[1][j], \
            solution[2][j], solution[3][j]);
        
        /* the algorithm works by finding the first and the last
           instance of a digit, if they match - this digit is unique */
        char *first = strchr(buffer, '1');
        char *last = strrchr(buffer, '1');
        if(first == last != NULL) {
            short i = countWhitespaces(buffer, first - buffer);
            if(solution[i][j] / 10 != 0) {
                collapseState(solution, i, j, 2);
                collapseState(solution, i, j, 3);
                collapseState(solution, i, j, 4);
                *finished = 0;
            }
        }
        
        first = strchr(buffer, '2');
        last = strrchr(buffer, '2');
        if(first == last != NULL) {
            short i = countWhitespaces(buffer, first - buffer);
            if(solution[i][j] / 10 != 0) {
                collapseState(solution, i, j, 1);
                collapseState(solution, i, j, 3);
                collapseState(solution, i, j, 4);
                *finished = 0;
            }
        }
        
        first = strchr(buffer, '3');
        last = strrchr(buffer, '3');
        if(first == last != NULL) {
            short i = countWhitespaces(buffer, first - buffer);
            if(solution[i][j] / 10 != 0) {
                collapseState(solution, i, j, 1);
                collapseState(solution, i, j, 2);
                collapseState(solution, i, j, 4);
                *finished = 0;
            }
        }
        
        first = strchr(buffer, '4');
        last = strrchr(buffer, '4');
        if(first == last != NULL) {
            short i = countWhitespaces(buffer, first - buffer);
            if(solution[i][j] / 10 != 0) { 
                collapseState(solution, i, j, 1);
                collapseState(solution, i, j, 2);
                collapseState(solution, i, j, 3);
                *finished = 0;
            }
        }
    }
}

void reuseClues(int **solution, int *clues) {
    /* this function reuses clues and looks for such cominations:
       [2]:[X][X][4][X], [2]:[X][X][X][4], [3]:[X][X][4][X] */
    for(short i = 0; i < 16; ++i)
        if(clues[i] == 2 || clues[i] == 3) {
            short cell_row, cell_col;
            if(i < 4) {
                cell_row = 0;
                cell_col = i;
                if(clues[i] == 2) {
                    if(solution[2][cell_col] == 4) {
                        collapseState(solution, 0, cell_col, 1);
                        collapseState(solution, 1, cell_col, 3);
                    }
                    else if(solution[3][cell_col] == 4) {
                        collapseState(solution, 0, cell_col, 1);
                        collapseState(solution, 0, cell_col, 2);
                    }
                }
                else if(clues[i] == 3)
                    if(solution[2][cell_col] == 4)
                        collapseState(solution, 1, cell_col, 1);
            }
            else if(i < 8) {
                cell_row = i - 4;
                cell_col = 3;
                if(clues[i] == 2) {
                    if(solution[cell_row][1] == 4) {
                        collapseState(solution, cell_row, 3, 1);
                        collapseState(solution, cell_row, 2, 3);
                    }
                    else if(solution[cell_row][0] == 4) {
                        collapseState(solution, cell_row, 3, 1);
                        collapseState(solution, cell_row, 3, 2);
                    }
                }
                else if(clues[i] == 3)
                    if(solution[cell_row][1] == 4)
                        collapseState(solution, cell_row, 2, 1);
            }
            else if(i < 12) {
                cell_row = 3;
                cell_col = 11 - i;
                if(clues[i] == 2) {
                    if(solution[1][cell_col] == 4) {
                        collapseState(solution, 3, cell_col, 1);
                        collapseState(solution, 2, cell_col, 3);
                    }
                    else if(solution[0][cell_col] == 4) {
                        collapseState(solution, 3, cell_col, 1);
                        collapseState(solution, 3, cell_col, 2);
                    }
                }
                else if(clues[i] == 3)
                    if(solution[1][cell_col] == 4)
                        collapseState(solution, 2, cell_col, 1);
            }
            else {
                cell_row = 15 - i;
                cell_col = 0;
                if(clues[i] == 2) {
                    if(solution[cell_row][2] == 4) {
                        collapseState(solution, cell_row, 0, 1);
                        collapseState(solution, cell_row, 1, 3);
                    }
                    else if(solution[cell_row][3] == 4) {
                        collapseState(solution, cell_row, 0, 1);
                        collapseState(solution, cell_row, 0, 2);
                    }
                }
                else if(clues[i] == 3)
                    if(solution[cell_row][2] == 4)
                        collapseState(solution, cell_row, 1, 1);
            }
        }
}

void useClues(int **solution, int *clues) {
    /* this function uses clues to collapse some of the states */
    for(short i = 0; i < 16; ++i)
        if(clues[i] != 0) {
            short cell_row, cell_col;
            if(i < 4) {
                cell_row = 0;
                cell_col = i;
            }
            else if(i < 8) {
                cell_row = i - 4;
                cell_col = 3;
            }
            else if(i < 12) {
                cell_row = 3;
                cell_col = 11 - i;
            }
            else {
                cell_row = 15 - i;
                cell_col = 0;
            }
            switch(clues[i]) {
                case 1:
                    collapseState(solution, cell_row, cell_col, 1);
                    collapseState(solution, cell_row, cell_col, 2);
                    collapseState(solution, cell_row, cell_col, 3);
                    break;
                case 2:
                    collapseState(solution, cell_row, cell_col, 4);
                    break;
                case 3:
                    collapseState(solution, cell_row, cell_col, 3);
                    collapseState(solution, cell_row, cell_col, 4);
                    break;
            }
        }
}

short countWhitespaces(char *buffer, short end) {
    /* counts the number of whitespaces from buffer[0] to end */ 
    short result = 0;
    for(short i = 0; i < end; ++i)
        if(buffer[i] == ' ')
            ++result;
    return result;
}

int **SolvePuzzle (int *clues) {
    int **solution = (int**)malloc(4 * sizeof(int*));
    for(short i = 0; i < 4; ++i)
        solution[i] = (int*)malloc(4 * sizeof(int));
    
    /* initially all cells are in superposition state
       and can be either 1, 2, 3 or 4 */
    for(short i = 0; i < 4; ++i)
        for(short j = 0; j < 4; ++j)
            solution[i][j] = 1234;
    
    /* use given clues to collapse some of the states */
    useClues(solution, clues);
    
    /* keep collapsing unique cells and reusing the clues
       until we arrive at the final solution */
    short finished = 0;
    while(!finished) {
        finished = 1;
        collapseUnique(solution, &finished);
        reuseClues(solution, clues);
    }
    
    return solution;
}
