//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLMenuItemElement.h>

@class NSString;

@interface TVLSignInSignOutMenuItemElement : TVLMenuItemElement
{
    _Bool _signOutExitsApp;
    NSString *_confirmationTitle;
    NSString *_confirmationDescription;
    NSString *_signInPageURL;
}

@property(copy, nonatomic) NSString *signInPageURL; // @synthesize signInPageURL=_signInPageURL;
@property(copy, nonatomic) NSString *confirmationDescription; // @synthesize confirmationDescription=_confirmationDescription;
@property(copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(nonatomic) _Bool signOutExitsApp; // @synthesize signOutExitsApp=_signOutExitsApp;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;

@end
