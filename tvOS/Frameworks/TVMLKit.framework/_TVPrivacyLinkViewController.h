//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class IKViewElement, OBPrivacyLinkController;

__attribute__((visibility("hidden")))
@interface _TVPrivacyLinkViewController : UIViewController
{
    IKViewElement *_viewElement;
    OBPrivacyLinkController *_impl;
}

@property(retain, nonatomic) OBPrivacyLinkController *impl; // @synthesize impl=_impl;
@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;

@end

