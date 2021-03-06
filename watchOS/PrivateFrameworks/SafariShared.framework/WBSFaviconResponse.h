//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

#import "WBSIconResponse.h"

@class NSString, UIColor, UIImage;

@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse>
{
    UIImage *_favicon;
    unsigned int _faviconType;
}

@property(readonly, nonatomic) unsigned int faviconType; // @synthesize faviconType=_faviconType;
@property(readonly, nonatomic) UIImage *favicon; // @synthesize favicon=_favicon;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *icon;
- (id)initWithURL:(id)arg1 favicon:(id)arg2 faviconType:(unsigned int)arg3;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIColor *extractedBackgroundColor;
@property(readonly, nonatomic, getter=isGenerated) _Bool generated;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

