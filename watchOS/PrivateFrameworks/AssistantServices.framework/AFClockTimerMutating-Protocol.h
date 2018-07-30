//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL, NSUUID;

@protocol AFClockTimerMutating <NSObject>
- (void)setLastModifiedDate:(NSDate *)arg1;
- (void)setDismissedDate:(NSDate *)arg1;
- (void)setFiredDate:(NSDate *)arg1;
- (void)setFireDate:(NSDate *)arg1;
- (void)setFireTimeInterval:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setState:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setIsFiring:(_Bool)arg1;
- (void)setTimerURL:(NSURL *)arg1;
- (void)setTimerID:(NSUUID *)arg1;
@end
