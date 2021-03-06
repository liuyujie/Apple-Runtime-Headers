//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TVViewElement, VUICardView, VUICardViewLayoutFactory;

__attribute__((visibility("hidden")))
@interface VUICardCollectionViewCell : UICollectionViewCell
{
    _Bool _allowsFocus;
    TVViewElement *_viewElement;
    VUICardView *_cardView;
    VUICardViewLayoutFactory *_layoutFactory;
}

+ (id)cardCellWithElement:(id)arg1 existingCell:(id)arg2;
@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
@property(retain, nonatomic) VUICardViewLayoutFactory *layoutFactory; // @synthesize layoutFactory=_layoutFactory;
@property(retain, nonatomic) VUICardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) TVViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setCardView:(id)arg1 force:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

