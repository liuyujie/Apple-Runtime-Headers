//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol HUQuickControlContentCharacteristicWritingDelegate <NSObject>
- (void)quickControlContent:(id <HUQuickControlContentCharacteristicWriting>)arg1 didEndPossibleWritesForCharacteristics:(NSSet *)arg2;
- (void)quickControlContent:(id <HUQuickControlContentCharacteristicWriting>)arg1 willBeginPossibleWritesForCharacteristics:(NSSet *)arg2;
- (void)quickControlContentDidUpdateCharacteristicValueOverrides:(id <HUQuickControlContentCharacteristicWriting>)arg1;
@end

