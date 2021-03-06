//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "PUICApplicationStatusBarProperties.h"
#import "PUICStatusBarAppContextViewDataSource.h"

@class NSArray, NSString, PUICAppContextDataSourceObservedImpl, PUICStatusBarProperties, UIColor, UIFont, UIImage, UIView;

@interface PUICApplicationStatusBarItem : NSObject <BSXPCCoding, PUICApplicationStatusBarProperties, PUICStatusBarAppContextViewDataSource, NSSecureCoding, NSCopying>
{
    PUICStatusBarProperties *_currentProperties;
    PUICStatusBarProperties *_stagedProperties;
    _Bool _stagedPropertiesDirty;
    PUICAppContextDataSourceObservedImpl *_observerImpl;
}

+ (_Bool)supportsSecureCoding;
+ (id)imageWithView:(id)arg1;
- (void).cxx_destruct;
- (id)dataAsApplicationStatusBarItem;
- (_Bool)hasPendingCommits;
- (_Bool)commitChangesAnimated:(_Bool)arg1;
- (_Bool)isObservingStatusBarAppContextDataSource:(id)arg1;
- (void)removeStatusBarAppContextDataSourceObserver:(id)arg1;
- (void)addStatusBarAppContextDataSourceObserver:(id)arg1;
- (id)_rightSideAdditionalImagesInteractive:(_Bool)arg1;
- (id)statusBarAppContextRightSideAdditionalImagesInteractive;
@property(copy, nonatomic) NSArray *rightSideAdditionalImagesInteractive;
- (id)_rightSideAdditionalImages:(_Bool)arg1;
- (id)statusBarAppContextRightSideAdditionalImages;
@property(copy, nonatomic) NSArray *rightSideAdditionalImages;
- (id)_navigationImage:(_Bool)arg1;
- (id)statusBarAppContextNavigationImage;
@property(retain, nonatomic) UIImage *navigationImage;
- (_Bool)_navUIBackButtonDisabled:(_Bool)arg1;
- (_Bool)statusBarAppContextNavUIBackButtonDisabled;
@property(nonatomic) _Bool navUIBackButtonDisabled;
- (_Bool)_showNavUI:(_Bool)arg1;
- (_Bool)statusBarAppContextShowNavUI;
@property(nonatomic) _Bool showNavigationUI;
- (id)_backgroundColor:(_Bool)arg1;
- (id)statusBarAppContextBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor;
- (_Bool)_isTitleInteractive:(_Bool)arg1;
- (_Bool)statusBarAppContextIsTitleInteractive;
@property(nonatomic, getter=isTitleInteractive) _Bool titleInteractive;
- (float)_inset:(_Bool)arg1;
- (float)statusBarAppContextTitleInset;
@property(nonatomic) float inset;
- (float)_titleBaseLine:(_Bool)arg1;
- (float)statusBarAppContextTitleBaseLine;
@property(nonatomic) float titleBaseLine;
- (id)_titleFont:(_Bool)arg1;
- (id)statusBarAppContextTitleFont;
@property(retain, nonatomic) UIFont *titleFont;
- (id)_titleView:(_Bool)arg1;
- (id)statusBarAppContextTitleView;
@property(retain, nonatomic) UIView *titleView;
- (id)_titleColor:(_Bool)arg1;
- (id)statusBarAppContextTitleColor;
@property(retain, nonatomic) UIColor *titleColor;
- (id)_title:(_Bool)arg1;
- (id)statusBarAppContextTitleText;
@property(copy, nonatomic) NSString *title;
- (id)_getProperties:(_Bool)arg1;
- (id)_getStagedProperties:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

