//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class NSURL, SiriTVUIImageViewTemplateItem, SiriTVUITemplateImageView, UITraitCollection;

@interface SiriTVUITemplateImageViewController : SiriTVUITemplateItemViewController
{
    NSURL *_currentImageURL;
    UITraitCollection *_previousTraitCollection;
    _Bool _hasAppeared;
}

@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
- (void).cxx_destruct;
- (void)_updateImageWithTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(retain, nonatomic) SiriTVUIImageViewTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateImageView *view; // @dynamic view;

@end

