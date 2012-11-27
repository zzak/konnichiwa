Gem::Specification.new do |s|
  s.name = 'konnichiwa'
  s.version = '0.0.1'
  s.summary = 'a tiny c extension'
  s.description = 'testing require'
  s.authors = ['Zachary Scott']
  s.email = 'zachary@zacharyscott.net'
  s.homepage = 'http://github.com/zzak'
  s.files = Dir.glob('ext/*.{c,h,rb}')
  s.extensions = ['ext/extconf.rb']
end
