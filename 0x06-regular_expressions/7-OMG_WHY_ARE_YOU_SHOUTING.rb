#!/usr/bin/env ruby
# script that matches a regular expression

puts ARGV[0].scan(/[A-Z]*/).join
