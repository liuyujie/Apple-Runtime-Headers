//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarImageView, _UIStatusBarWifiSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarWifiItem : _UIStatusBarItem
{
    _UIStatusBarWifiSignalView *_signalView;
    _UIStatusBarImageView *_networkIconView;
}

+ (id)iconDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
+ (id)groupWithPriority:(int)arg1;
@property(retain, nonatomic) _UIStatusBarImageView *networkIconView; // @synthesize networkIconView=_networkIconView;
@property(retain, nonatomic) _UIStatusBarWifiSignalView *signalView; // @synthesize signalView=_signalView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)_backgroundColorForUpdate:(id)arg1;
- (id)_fillColorForUpdate:(id)arg1;
- (float)_totalWidthForUpdate:(id)arg1;
- (float)_interspaceForUpdate:(id)arg1;
- (float)_barThicknessForUpdate:(id)arg1;
- (int)_barCountForUpdate:(id)arg1;
- (id)dependentEntryKeys;

@end
