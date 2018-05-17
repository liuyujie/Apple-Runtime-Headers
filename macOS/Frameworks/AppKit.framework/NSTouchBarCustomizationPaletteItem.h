//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPaletteItem : NSCollectionViewItem
{
    NSLayoutConstraint *_maxTextWidthConstraint;
    double _paletteScaleFactor;
    NSLayoutConstraint *_textSpacingConstraint;
}

- (void)applyLayoutAttributes:(id)arg1;
- (void)loadView;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)_viewControllerSupports10_10Features;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityHelp;
- (id)accessibilityActionNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;

@end
