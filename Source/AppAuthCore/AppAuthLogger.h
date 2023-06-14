//
//  AppAuthLogger.h
//  AppAuth-iOS
//
//  Created by Moldovan Iosif-Iulian on 12.05.2023.
//  Copyright © 2023 OpenID Foundation. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AppAuthLoggerDelegate <NSObject>

- (void)appAuthLogMessage:(NSString *)message;
- (void)appAuthNonfatalMessage:(NSString *)message;

@end

@interface AppAuthLogger : NSObject
@property(nonatomic, weak) id<AppAuthLoggerDelegate> delegate;

+ (instancetype)shared;
+ (void)logMessage:(NSString *)message;
+ (void)logNonFatal:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
