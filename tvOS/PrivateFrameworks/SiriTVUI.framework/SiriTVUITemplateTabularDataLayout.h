//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSDictionary, NSIndexSet, SiriTVUIRowStyle, SiriTVUIViewStyleCollection;

@interface SiriTVUITemplateTabularDataLayout : UICollectionViewLayout
{
    NSDictionary *_itemLayoutAttributesByIndexPath;
    NSDictionary *_dividerLayoutAttributesByRow;
    struct CGSize _currentContentSize;
    _Bool _hasTitleColumn;
    _Bool _adjustLayoutForWidthChanges;
    SiriTVUIViewStyleCollection *_columnStyles;
    SiriTVUIViewStyleCollection *_rowStyles;
    SiriTVUIRowStyle *_titleStyle;
    SiriTVUIRowStyle *_footerStyle;
    NSIndexSet *_highlightedRowIndices;
    struct UIEdgeInsets _horizontalKeylineInsets;
    struct UIEdgeInsets _horizontalContentInsets;
}

@property(copy, nonatomic) NSIndexSet *highlightedRowIndices; // @synthesize highlightedRowIndices=_highlightedRowIndices;
@property(nonatomic) _Bool adjustLayoutForWidthChanges; // @synthesize adjustLayoutForWidthChanges=_adjustLayoutForWidthChanges;
@property(nonatomic) _Bool hasTitleColumn; // @synthesize hasTitleColumn=_hasTitleColumn;
@property(nonatomic) struct UIEdgeInsets horizontalContentInsets; // @synthesize horizontalContentInsets=_horizontalContentInsets;
@property(nonatomic) struct UIEdgeInsets horizontalKeylineInsets; // @synthesize horizontalKeylineInsets=_horizontalKeylineInsets;
@property(copy, nonatomic) SiriTVUIRowStyle *footerStyle; // @synthesize footerStyle=_footerStyle;
@property(copy, nonatomic) SiriTVUIRowStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(retain, nonatomic) SiriTVUIViewStyleCollection *rowStyles; // @synthesize rowStyles=_rowStyles;
@property(retain, nonatomic) SiriTVUIViewStyleCollection *columnStyles; // @synthesize columnStyles=_columnStyles;
- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)_recalculateLayout;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)init;

@end

