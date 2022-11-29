import Foundation
import TrueLayerSDK

/// A bridging class to use the `TrueLayerSDK.TrueLayer.Payments.Manager` in Objective-C projects.
@objc
public class TrueLayerBridge: NSObject {
  /// Configures and sets up the SDK for a given environment.
  /// - Parameter environment: The environment to set up the SDK with.
  @objc
  public static func configure(with environment: TrueLayerEnvironment) {
    let trueLayerEnvironment: TrueLayer.Environment

    switch environment {
      case .sandbox:
        trueLayerEnvironment = .sandbox

      case .production:
        trueLayerEnvironment = .production
    }

    TrueLayer.Payments.manager.configure(environment: trueLayerEnvironment)
  }
}
