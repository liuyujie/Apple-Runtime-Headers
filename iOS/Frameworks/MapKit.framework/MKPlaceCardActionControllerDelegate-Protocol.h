//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKPlaceActionManager, MKPlaceCardActionsViewController, UIView;

@protocol MKPlaceCardActionControllerDelegate <NSObject>
- (void)placeCardActionControllerDidSelectReportAProblem:(MKPlaceCardActionsViewController *)arg1;
- (void)placeActionManager:(MKPlaceActionManager *)arg1 didSelectShareFromView:(UIView *)arg2;

@optional
- (void)placeCardActionControllerDidSelectionOpenBrandCard:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectionOpenInPinpoint:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectOpenInSkyline:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectSimulateLocation:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveMarker:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToExistingContact:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddPhoto:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToContacts:(MKPlaceCardActionsViewController *)arg1;
@end
