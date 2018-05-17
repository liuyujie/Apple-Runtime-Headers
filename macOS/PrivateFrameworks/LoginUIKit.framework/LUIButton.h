//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSDictionary;

@interface LUIButton : NSButton
{
    NSDictionary *_images;
}

+ (void)initialize;
+ (id)imagesForIdentifier:(id)arg1 style:(int)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (unsigned long long)focusRingType;
- (void)setEnabled:(BOOL)arg1;
- (id)_appearance;
- (void)setTitle:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setImages:(id)arg1;
- (void)_updateImages:(BOOL)arg1;

@end
