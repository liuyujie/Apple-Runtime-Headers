//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVTouchBarMediaSelectionOption, AVTouchBarMediaSelectionViewController;

@protocol AVTouchBarMediaSelectionViewControllerDelegate <NSObject>

@optional
- (void)touchBarMediaSelectionViewController:(AVTouchBarMediaSelectionViewController *)arg1 didSelectLegibleTouchBarMediaSelectionOption:(AVTouchBarMediaSelectionOption *)arg2;
- (void)touchBarMediaSelectionViewController:(AVTouchBarMediaSelectionViewController *)arg1 didSelectAudioTouchBarMediaSelectionOption:(AVTouchBarMediaSelectionOption *)arg2;
@end
