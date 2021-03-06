//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NAUIDeviceUtilities : NSObject
{
}

+ (float)mainScreenScale;
+ (_Bool)hasOrbCapability;
+ (id)uniqueDeviceIdentifier;
+ (id)operatingSystemName;
+ (id)localizedProductName;
+ (int)deviceClass;
+ (id)productClass;
+ (id)productHardwareModelName;
+ (id)productHardwareModel;
+ (id)productType;
+ (id)productBuildVersion;
+ (id)productVersion;
+ (_Bool)naui_isUsingLandscapeOrientation;
+ (_Bool)naui_shouldUseLargeiPadLayoutForSize:(struct CGSize)arg1;
+ (_Bool)naui_shouldUseLargeiPadLayout;
+ (_Bool)naui_isPad;
- (id)init;

@end

