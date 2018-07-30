//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDynamicColorModifier.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSHighContrastForegroundColorModifier : NSObject <NSDynamicColorModifier>
{
    double _luminanceThreshold;
}

@property double luminanceThreshold; // @synthesize luminanceThreshold=_luminanceThreshold;
- (id)colorByApplyingToColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLuminanceThreshold:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
