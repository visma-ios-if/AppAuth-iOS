//
//  AppAuthLogger.m
//  AppAuth-iOS
//
//  Created by Moldovan Iosif-Iulian on 12.05.2023.
//  Copyright © 2023 OpenID Foundation. All rights reserved.
//

#import "AppAuthLogger.h"

@implementation AppAuthLogger

+ (instancetype)shared {
  static dispatch_once_t pred = 0;
      static id _sharedObject = nil;
      dispatch_once(&pred, ^{
          _sharedObject = [[self alloc] init];
      });
      return _sharedObject;
}

+ (void)logMessage:(NSString *)message {
  [AppAuthLogger.shared.delegate appAuthLogMessage:message];
}

+ (void)logNonFatal:(NSString *)message {
  [AppAuthLogger.shared.delegate appAuthNonfatalMessage:message];
}

@end
