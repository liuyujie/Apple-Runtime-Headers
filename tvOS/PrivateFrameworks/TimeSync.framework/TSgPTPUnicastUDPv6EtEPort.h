//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TimeSync/TSgPTPFDEtEPort.h>

@interface TSgPTPUnicastUDPv6EtEPort : TSgPTPFDEtEPort
{
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;
- (void)dealloc;
- (long long)portType;
- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (id)initWithInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;

@end
