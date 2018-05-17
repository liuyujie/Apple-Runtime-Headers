//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOServerFormatToken.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TempToken : NSObject <GEOServerFormatToken>
{
    int _type;
    NSString *_token;
    unsigned int _value1;
    unsigned int _value2;
    NSArray *_value3s;
    NSString *_stringValue;
    id <GEOServerFormatTokenPriceValue> _priceValue;
    id <GEOTransitArtworkDataSource> _artworkValue;
    NSArray *_timeStampValues;
}

@property(retain, nonatomic) NSArray *timeStampValues; // @synthesize timeStampValues=_timeStampValues;
@property(retain, nonatomic) id <GEOTransitArtworkDataSource> artworkValue; // @synthesize artworkValue=_artworkValue;
@property(retain, nonatomic) id <GEOServerFormatTokenPriceValue> priceValue; // @synthesize priceValue=_priceValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) NSArray *value3s; // @synthesize value3s=_value3s;
@property(nonatomic) unsigned int value2; // @synthesize value2=_value2;
@property(nonatomic) unsigned int value1; // @synthesize value1=_value1;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
