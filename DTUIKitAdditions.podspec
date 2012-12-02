Pod::Spec.new do |s|
  s.name         = "DTUIKitAdditions"
  s.version      = "0.0.1"
  s.summary      = "DTUIKitAdditions"
  s.author = 'David Renoldner', 'hello@davetrudes.com'
  s.homepage     = "http://www.davetrudes.com"
  s.source       = { :git => "https://github.com/dave-trudes/DTUIKitAdditions.git"}
  s.platform     = :ios, '4.3'
  s.source_files = 'DTUIKitAdditions'
  s.ios.frameworks = 'QuartzCore', 'UIKit'
  s.requires_arc = true

end
