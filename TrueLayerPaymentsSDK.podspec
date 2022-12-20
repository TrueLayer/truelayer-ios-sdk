Pod::Spec.new do |s|
  s.name  = "TrueLayerPaymentsSDK"
  s.version = "2.1.0-rc.1"
  s.summary = "The official iOS SDK for TrueLayer's open banking."
  s.description = "This SDK provides a complete experience to consume TrueLayer's open banking APIs in a fast, safe and optimized manner."
  s.homepage = "https://github.com/TrueLayer/truelayer-ios-sdk"
  s.license = "git@github.com:TrueLayer/truelayer-ios-sdk/licence"
  s.author = "TrueLayer Limited"
  s.source = { :git => "https://github.com/TrueLayer/TrueLayer-iOS-SDK.git", :tag => "2.1.0" }
  s.platform = :ios
  s.swift_version = "5.7"
  s.ios.deployment_target = "14.0"
  s.vendored_frameworks = "Frameworks/TrueLayerAPI.xcframework", "Frameworks/TrueLayerCore.xcframework", "Frameworks/TrueLayerLogger.xcframework", "Frameworks/TrueLayerMockable.xcframework", "Frameworks/TrueLayerNetwork.xcframework", "Frameworks/TrueLayerSDK.xcframework", "Frameworks/TrueLayerUI.xcframework", "Frameworks/TrueLayerUtils.xcframework"
  s.source_files = 'Objective-C Bridge/**/*.{swift,h,m}'
  s.public_header_files = 'Objective-C Bridge/**/*.h'
end
