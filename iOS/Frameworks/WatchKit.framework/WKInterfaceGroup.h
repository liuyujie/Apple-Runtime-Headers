//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

#import "WKImageAnimatable.h"

@class NSString;

@interface WKInterfaceGroup : WKInterfaceObject <WKImageAnimatable>
{
}

- (void)stopAnimating;
- (void)startAnimatingWithImagesInRange:(struct _NSRange)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (void)startAnimating;
- (void)setBackgroundImageNamed:(id)arg1;
- (void)setBackgroundImageData:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setCornerRadius:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
