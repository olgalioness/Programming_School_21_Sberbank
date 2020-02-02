#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex07/main_comb_multiple';
						my $output;
						my $expected;
						die "ex07/main_comb_multiple failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = join ', ', '0' .. '9';
$expected .= join ', ',
	grep {
		my ($a, $b) = split '', $_;
		$a < $b
	}
	'00' .. '99';
$expected .= join ', ', '0' .. '9';

						


						if ($output eq $expected) {
							say 'work/ex07/main_comb_multiple good!';
						} else {
							say "!!!! ERROR in work/ex07/main_comb_multiple: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					