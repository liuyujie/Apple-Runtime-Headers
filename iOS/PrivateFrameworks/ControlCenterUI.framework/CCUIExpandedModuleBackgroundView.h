//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTMaterialView;

@interface CCUIExpandedModuleBackgroundView : UIView
{
    id _client;
    double _weighting;
    MTMaterialView *_materialView;
    UIView *_obscuringBackgroundView;
}

@property(retain, nonatomic) UIView *obscuringBackgroundView; // @synthesize obscuringBackgroundView=_obscuringBackgroundView;
@property(retain, nonatomic) MTMaterialView *materialView; // @synthesize materialView=_materialView;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
@property(nonatomic) __weak id client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
