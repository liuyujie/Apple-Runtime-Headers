//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUIVibrantEffectView.h>

#import "SiriTVUITemplateItemView.h"

@class NSDictionary, NSString, UILabel;

@interface SiriTVUIVibrantLabel : SiriTVUIVibrantEffectView <SiriTVUITemplateItemView>
{
    UILabel *_label;
    _Bool hasPriorityLayout;
    NSDictionary *_attributedTexts;
}

@property(copy, nonatomic) NSDictionary *attributedTexts; // @synthesize attributedTexts=_attributedTexts;
@property(nonatomic) _Bool hasPriorityLayout; // @synthesize hasPriorityLayout;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic) _Bool marqueeRunning;
@property(nonatomic) _Bool marqueeEnabled;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long numberOfLines;
- (void)_updateAttributedText;
- (_Bool)shouldFitWithinContentMargins;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

