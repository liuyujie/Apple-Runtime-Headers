//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotationView.h"

#import "PXPlacesMapAnnotationViewFadable.h"

@class NSString, PKExtendedTraitCollection, PXPlacesImageCache, UXImageView, UXLabel;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable>
{
    long long _geotaggablesCount;
    CDUnknownBlockType _displayCompletion;
    PKExtendedTraitCollection *_extendedTraitCollection;
    id _extendedTraitObserver;
    UXLabel *_countLabel;
    UXImageView *_countLabelBackgroundImageView;
    PXPlacesImageCache *_imageCache;
}

+ (id)_thumbnailCreationOperationQueue;
+ (id)_thumbnailFetchOperationQueue;
@property(retain, nonatomic) PXPlacesImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) UXImageView *countLabelBackgroundImageView; // @synthesize countLabelBackgroundImageView=_countLabelBackgroundImageView;
@property(retain, nonatomic) UXLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) id extendedTraitObserver; // @synthesize extendedTraitObserver=_extendedTraitObserver;
@property(retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(copy, nonatomic) CDUnknownBlockType displayCompletion; // @synthesize displayCompletion=_displayCompletion;
- (void).cxx_destruct;
- (void)_hideCountLabel;
- (void)_showCountLabel;
- (void)_reloadCount:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)_processPostImage;
- (void)_processGeotaggable:(id)arg1 withImage:(struct CGImage *)arg2 popoverImageType:(unsigned long long)arg3 shouldCache:(BOOL)arg4;
- (void)_processPlaceHolderForGeotaggable:(id)arg1;
- (void)_fetchImageWithNetworkAccessAllowed:(BOOL)arg1;
- (void)_reloadData:(BOOL)arg1;
- (id)_countLabelBackgroundColor;
- (id)userCacheKey;
- (id)primaryGeotaggable;
- (void)prepareForReuse;
- (void)setAnnotation:(id)arg1;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 extendedTraitCollection:(id)arg3 imageCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
