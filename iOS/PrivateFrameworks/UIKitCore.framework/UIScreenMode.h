//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDisplayMode;

@interface UIScreenMode : NSObject
{
    FBSDisplayMode *_mode;
    _Bool _mainScreen;
}

+ (id)_screenModeForDisplayMode:(id)arg1 mainScreen:(_Bool)arg2;
@property(getter=_isMainScreen, setter=_setMainScreen:) _Bool _mainScreen; // @synthesize _mainScreen;
- (void).cxx_destruct;
- (id)description;
- (id)_displayMode;
@property(readonly, nonatomic) double pixelAspectRatio;
- (id)valueForKey:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (struct CGSize)_sizeWithLevel:(unsigned long long)arg1;
- (id)initWithDisplayMode:(id)arg1 mainScreen:(_Bool)arg2;

@end

