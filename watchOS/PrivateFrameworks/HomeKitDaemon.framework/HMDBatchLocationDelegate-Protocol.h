//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMDLocationDelegate.h"

@class CLLocation;

@protocol HMDBatchLocationDelegate <HMDLocationDelegate>
- (void)getReachableIPAccessory:(unsigned int *)arg1 btleAccessory:(unsigned int *)arg2 mediaAccessory:(unsigned int *)arg3;

@optional
- (void)didDetermineBatchLocation:(CLLocation *)arg1;
@end

