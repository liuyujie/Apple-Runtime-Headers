//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKTextBadgeAttachment.h"

@class IKColor;

@interface IKTextBadgeAttachment (TVMLKitAdditions)
- (void)tv_resolveWithTextLayoutDirection:(long long)arg1 layoutObserver:(CDUnknownBlockType)arg2;
- (void)tv_setImage:(id)arg1;
@property(retain, nonatomic, setter=tv_setCurrentTintColor:) IKColor *tv_currentTintColor;
@property(retain, nonatomic, setter=tv_setHighlightColor:) IKColor *tv_highlightColor;
- (void)tv_setResolving:(_Bool)arg1;
@property(readonly, nonatomic, getter=tv_isResolving) _Bool tv_resolving;
- (void)tv_setImageProxy:(id)arg1;
- (id)tv_imageProxy;
@end

