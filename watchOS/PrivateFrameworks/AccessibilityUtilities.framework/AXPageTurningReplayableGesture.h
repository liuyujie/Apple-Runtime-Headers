//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXPageTurningReplayableGesture : AXReplayableGesture
{
    _Bool _isLeftToRightSwipe;
    _Bool _isLandscape;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) _Bool isLeftToRightSwipe; // @synthesize isLeftToRightSwipe=_isLeftToRightSwipe;
- (void)updateForLandscape:(_Bool)arg1;
- (_Bool)arePointsDeviceRelative;
- (float)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned int)arg2;
- (struct CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned int)arg2;
- (double)timeAtEventIndex:(unsigned int)arg1;
- (id)fingerIdentifiersAtEventIndex:(unsigned int)arg1;
- (unsigned int)numberOfEvents;
- (id)initForLeftToRightSwipe:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

