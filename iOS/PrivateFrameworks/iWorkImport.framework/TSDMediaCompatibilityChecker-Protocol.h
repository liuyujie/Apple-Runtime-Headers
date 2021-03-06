//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol TSDMediaCompatibilityChecker <NSObject>
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long compatibilityLevel;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (void)cancel;
- (void)checkCompatibilityUpToLevel:(long long)arg1 completionHandler:(void (^)(void))arg2;
@end

