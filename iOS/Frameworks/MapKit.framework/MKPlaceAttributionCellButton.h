//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

__attribute__((visibility("hidden")))
@interface MKPlaceAttributionCellButton : UIButton
{
    _Bool _highlighted;
    id <MKPlaceAttributionCellButtonDelegate> _buttonDelegate;
}

@property(nonatomic) __weak id <MKPlaceAttributionCellButtonDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
- (_Bool)isHighlighted;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;

@end
