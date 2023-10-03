#!/usr/bin/env ruby
# script that matches a regular expression(hb with 2 to 5 t's and an n)

puts ARGV[0].scan(/hbt{2,5}n/).join
