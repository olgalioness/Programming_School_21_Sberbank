#!/usr/bin/env perl
					use strict;
					use warnings;
					use feature 'say';

					my $program = './work/ex03/ft_rev_params';
					my $output;
					my $expected;

					

my %tests;

					%tests = (
	"$program" => "",
	"$program a" => "a\n",
	"$program a b" => "b\na\n",
	"$program asdf beta char" => "char\nbeta\nasdf\n",
	"$program 'lol hi' test" => "test\nlol hi\n",
	"$program '' !" => "!\n\n",
);

					


					my $errors = 0;
					foreach my $test (sort keys %tests) {
						$output = `$test`;
						$expected = $tests{$test};
						if ($output ne $expected) {
							say "!!!! ERROR in work/ex03/check.pl test `$test`: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
							$errors++;
						}
						# else { say "debug good: $output"; }
					}
					if ($errors == 0) {
						say 'work/ex03/check.pl good!';
					}
				
				