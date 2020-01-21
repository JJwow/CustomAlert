#
# Be sure to run `pod lib lint CustomAlert.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CustomAlert'
  s.version          = '0.5.4'
  s.summary          = '弹窗集合'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: 弹窗集合
                       DESC

  s.homepage         = 'https://github.com/JJWOW/CustomAlert'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'JJWOW' => 'junjie.wang@ly.com' }
  s.source           = {  :http => 'https://github.com/JJwow/CustomAlert/raw/master/CustomAlert/Classes/CBDCustomAlertView.framework.zip' }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'
  s.preserve_paths = 'CustomAlert/Classes/*.zip'
  #s.source_files = 'CustomAlert/Classes/*.zip'
  #s.vendored_frameworks = "CustomAlert/CBDCustomAlertView.framework"
  
  # s.resource_bundles = {
  #   'CustomAlert' => ['CustomAlert/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
