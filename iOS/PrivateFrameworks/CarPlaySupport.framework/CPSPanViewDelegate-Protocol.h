//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPSPanView;

@protocol CPSPanViewDelegate <NSObject>
- (void)panView:(CPSPanView *)arg1 panWithDirection:(long long)arg2;
- (void)panView:(CPSPanView *)arg1 panEndedWithDirection:(long long)arg2;
- (void)panView:(CPSPanView *)arg1 panBeganWithDirection:(long long)arg2;
@end

