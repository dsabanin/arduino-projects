#!/usr/bin/env ruby

File.open("/dev/ttyACM0", "w") do |fp|
  sleep(5)
  fp << ARGV.join(" ") << "\n"
end
