//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRExternalDeviceController, MRTransportExternalDevice;

@protocol MRExternalDeviceControllerDelegate <NSObject>

@optional
- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didRemoveDevice:(MRTransportExternalDevice *)arg2;
- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didDiscoverDevice:(MRTransportExternalDevice *)arg2;
@end
