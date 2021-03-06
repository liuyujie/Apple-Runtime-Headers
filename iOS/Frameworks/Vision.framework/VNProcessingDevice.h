//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface VNProcessingDevice : NSObject <NSCopying>
{
}

+ (void)forcedCleanup;
+ (id)directLabradorDevice;
+ (id)defaultLabradorDevice;
+ (id)deviceForMetalDevice:(id)arg1;
+ (id)defaultMetalDevice;
+ (id)defaultCPUDevice;
+ (id)defaultDevice;
+ (id)allDevices;
+ (void)_unlockOnceTokensLock;
+ (void)_lockOnceTokensLock;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)espressoStorageType;
- (int)espressoEngine;
- (int)espressoDeviceID;
- (id)metalDevice;
- (_Bool)targetsLabrador;
- (_Bool)targetsGPU;
- (_Bool)targetsCPU;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

