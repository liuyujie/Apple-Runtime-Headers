//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface EKUIBlurryView : UIView
{
    _Bool _hasActivated;
    _Bool _shouldRasterizeForTransition;
}

@property(nonatomic) _Bool shouldRasterizeForTransition; // @synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition;
@property double blurRadius;
- (void)_activateBlurring;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
