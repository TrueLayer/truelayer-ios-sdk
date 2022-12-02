#import "TrueLayerMandateContext.h"

@implementation TrueLayerMandateContext

- (instancetype)initWithMandateID:(NSString *)mandateID
                    resourceToken:(NSString *)resourceToken
                      redirectURL:(NSURL *)redirectURL
                   preferences:(TrueLayerMandatePreferences *)preferences {
  self = [super init];
  if (self) {
    self.mandateID = mandateID;
    self.resourceToken = resourceToken;
    self.redirectURL = redirectURL;
    self.preferences = preferences;
  }
  return self;
}

@end
