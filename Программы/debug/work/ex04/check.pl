#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex04/main';
						my $output;
						my $expected;
						die "ex04/main failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = join ', ',
	grep {
		my ($a, $b, $c) = split '', $_;
		$a < $b and $b < $c;
	}
	'000' .. '999';

						


						if ($output eq $expected) {
							say 'work/ex04/main good!';
						} else {
							say "!!!! ERROR in work/ex04/main: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					