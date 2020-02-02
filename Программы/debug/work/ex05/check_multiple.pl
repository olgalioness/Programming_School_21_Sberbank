#!/usr/bin/env perl
						use strict;
						use warnings;
						use feature 'say';
						
						my $program = './work/ex05/main_multiple';
						my $output;
						my $expected;
						die "ex05/main_multiple failed to run: $?" if $?;

						


						$output = `$program`;
					
						$expected = join ', ',
	map { "$_->[0] $_->[1]" }
	grep { $_->[0] < $_->[1] }
	map {
		my $first = $_;
		map { [$first, $_] } '00' .. '99'
	}
	'00' .. '99';
$expected = "$expected$expected";

						


						if ($output eq $expected) {
							say 'work/ex05/main_multiple good!';
						} else {
							say "!!!! ERROR in work/ex05/main_multiple: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
						}
					
					