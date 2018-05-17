//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface AWDNFCHCIEndOfTransactionV2Event : PBCodable <NSCopying>
{
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_aid;
    unsigned int _avgRSSIValue;
    unsigned int _command;
    unsigned int _commandParam1;
    unsigned int _commandResult;
    unsigned int _currencyCode;
    unsigned int _expressType;
    unsigned int _informative;
    unsigned int _maxRSSIValue;
    unsigned int _minRSSIValue;
    unsigned int _spid;
    NSData *_stationID;
    NSData *_terminalIdentifier;
    unsigned int _totalRSSISamples;
    unsigned int _transactionCategory;
    unsigned int _transactionExtension;
    NSData *_transactionId;
    unsigned int _transactionInProgress;
    unsigned int _transactionStatus;
    unsigned int _transactionType;
    NSData *_uuidReference;
    unsigned int _version;
    BOOL _hasExpiryDate;
    BOOL _isBlacklisted;
    struct {
        unsigned int timeDeltaFromReference:1;
        unsigned int timestamp:1;
        unsigned int avgRSSIValue:1;
        unsigned int command:1;
        unsigned int commandParam1:1;
        unsigned int commandResult:1;
        unsigned int currencyCode:1;
        unsigned int expressType:1;
        unsigned int informative:1;
        unsigned int maxRSSIValue:1;
        unsigned int minRSSIValue:1;
        unsigned int spid:1;
        unsigned int totalRSSISamples:1;
        unsigned int transactionCategory:1;
        unsigned int transactionExtension:1;
        unsigned int transactionInProgress:1;
        unsigned int transactionStatus:1;
        unsigned int transactionType:1;
        unsigned int version:1;
        unsigned int hasExpiryDate:1;
        unsigned int isBlacklisted:1;
    } _has;
}

@property(retain, nonatomic) NSData *transactionId; // @synthesize transactionId=_transactionId;
@property(nonatomic) unsigned int minRSSIValue; // @synthesize minRSSIValue=_minRSSIValue;
@property(nonatomic) unsigned int maxRSSIValue; // @synthesize maxRSSIValue=_maxRSSIValue;
@property(nonatomic) unsigned int avgRSSIValue; // @synthesize avgRSSIValue=_avgRSSIValue;
@property(nonatomic) unsigned int totalRSSISamples; // @synthesize totalRSSISamples=_totalRSSISamples;
@property(retain, nonatomic) NSData *uuidReference; // @synthesize uuidReference=_uuidReference;
@property(nonatomic) unsigned long long timeDeltaFromReference; // @synthesize timeDeltaFromReference=_timeDeltaFromReference;
@property(retain, nonatomic) NSData *terminalIdentifier; // @synthesize terminalIdentifier=_terminalIdentifier;
@property(nonatomic) unsigned int transactionInProgress; // @synthesize transactionInProgress=_transactionInProgress;
@property(nonatomic) unsigned int transactionExtension; // @synthesize transactionExtension=_transactionExtension;
@property(nonatomic) unsigned int transactionType; // @synthesize transactionType=_transactionType;
@property(nonatomic) unsigned int transactionCategory; // @synthesize transactionCategory=_transactionCategory;
@property(nonatomic) unsigned int transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property(retain, nonatomic) NSData *stationID; // @synthesize stationID=_stationID;
@property(nonatomic) unsigned int spid; // @synthesize spid=_spid;
@property(nonatomic) BOOL isBlacklisted; // @synthesize isBlacklisted=_isBlacklisted;
@property(nonatomic) unsigned int informative; // @synthesize informative=_informative;
@property(nonatomic) BOOL hasExpiryDate; // @synthesize hasExpiryDate=_hasExpiryDate;
@property(nonatomic) unsigned int expressType; // @synthesize expressType=_expressType;
@property(nonatomic) unsigned int currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) unsigned int commandResult; // @synthesize commandResult=_commandResult;
@property(nonatomic) unsigned int commandParam1; // @synthesize commandParam1=_commandParam1;
@property(nonatomic) unsigned int command; // @synthesize command=_command;
@property(retain, nonatomic) NSData *aid; // @synthesize aid=_aid;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTransactionId;
@property(nonatomic) BOOL hasMinRSSIValue;
@property(nonatomic) BOOL hasMaxRSSIValue;
@property(nonatomic) BOOL hasAvgRSSIValue;
@property(nonatomic) BOOL hasTotalRSSISamples;
@property(readonly, nonatomic) BOOL hasUuidReference;
@property(nonatomic) BOOL hasTimeDeltaFromReference;
@property(readonly, nonatomic) BOOL hasTerminalIdentifier;
@property(nonatomic) BOOL hasTransactionInProgress;
@property(nonatomic) BOOL hasTransactionExtension;
@property(nonatomic) BOOL hasTransactionType;
@property(nonatomic) BOOL hasTransactionCategory;
@property(nonatomic) BOOL hasTransactionStatus;
@property(readonly, nonatomic) BOOL hasStationID;
@property(nonatomic) BOOL hasSpid;
@property(nonatomic) BOOL hasIsBlacklisted;
@property(nonatomic) BOOL hasInformative;
@property(nonatomic) BOOL hasHasExpiryDate;
@property(nonatomic) BOOL hasExpressType;
@property(nonatomic) BOOL hasCurrencyCode;
@property(nonatomic) BOOL hasCommandResult;
@property(nonatomic) BOOL hasCommandParam1;
@property(nonatomic) BOOL hasCommand;
@property(readonly, nonatomic) BOOL hasAid;
@property(nonatomic) BOOL hasVersion;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end
