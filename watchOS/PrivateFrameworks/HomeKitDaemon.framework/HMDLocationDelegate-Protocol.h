//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, CLRegion;

@protocol HMDLocationDelegate <NSObject>

@optional
- (void)getReachableIPAccessory:(unsigned int *)arg1 btleAccessory:(unsigned int *)arg2 mediaAccessory:(unsigned int *)arg3;
- (void)didDetermineLocation:(CLLocation *)arg1;
- (void)didExitRegion:(CLRegion *)arg1;
- (void)didEnterRegion:(CLRegion *)arg1;
- (void)didDetermineState:(int)arg1 forRegion:(CLRegion *)arg2;
@end
