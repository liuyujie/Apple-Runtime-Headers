//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFExecutionEnvironment;

@protocol HFExecutionEnvironmentObserver <NSObject>

@optional
- (void)executionEnvironmentDidBecomeOccluded:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidBecomeVisible:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidEnterBackground:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentWillResignActive:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidBecomeActive:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentWillEnterForeground:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentRunningStateDidChange:(HFExecutionEnvironment *)arg1;
@end

