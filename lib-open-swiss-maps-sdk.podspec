Pod::Spec.new do |s|
  s.name             = 'SwisstopoMapsSDK'
  s.version          = '1.1.4'
  s.summary          = 'SwisstopoMapsSDK'
  s.homepage         = 'https://github.com/francescodrag/lib-open-swiss-maps-sdk'
  s.license          = { :type => 'MIT', :file => 'LICENSE.md' }
  s.author           = { 'SwisstopoMapsSDK' => 'SwisstopoMapsSDK@SwisstopoMapsSDK.com' }
  s.source           = { :git => 'https://github.com/francescodrag/lib-open-swiss-maps-sdk', :tag => s.version.to_s }
  s.ios.deployment_target = '11.0'
  s.swift_version = '5.0'
  s.source_files = 'ios/**/*.{h,m,swift}', 'bridging/ios/**/*.{h,m,swift}'
end
