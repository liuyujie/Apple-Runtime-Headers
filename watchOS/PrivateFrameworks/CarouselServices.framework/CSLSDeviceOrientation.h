//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSLSDeviceOrientation : NSObject
{
    _Bool _isInverted;
    unsigned int _wristOrientation;
    int _invertUINotifyToken;
    int _wristOrientationNotifyToken;
}

+ (id)sharedDeviceOrientation;
- (void)_updateWristOrientation;
- (unsigned int)wristOrientation;
- (void)_updateInvertedValue;
- (void)setInverted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isInverted;
- (void)dealloc;
- (id)_init;

@end

