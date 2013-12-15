//
//  INDANCSDevice_Private.h
//  INDANCSMac
//
//  Created by Indragie Karunaratne on 12/11/2013.
//  Copyright (c) 2013 Indragie Karunaratne. All rights reserved.
//

#import "INDANCSDevice.h"

@interface INDANCSDevice ()
- (id)initWithCBPeripheral:(CBPeripheral *)peripheral;
@property (nonatomic, strong, readonly) CBPeripheral *peripheral;
@property (nonatomic, copy, readwrite) NSString *name;
@property (nonatomic, copy, readwrite) NSString *modelIdentifier;
@property (nonatomic, strong) CBService *ANCSService;
@property (nonatomic, strong) CBService *DVCEService;
@property (nonatomic, strong) CBCharacteristic *NMCharacteristic;
@property (nonatomic, strong) CBCharacteristic *MLCharacteristic;
@property (nonatomic, strong) CBCharacteristic *NSCharacteristic;
@property (nonatomic, strong) CBCharacteristic *CPCharacteristic;
@property (nonatomic, strong) CBCharacteristic *DSCharacteristic;
@property (nonatomic, strong) NSTimer *registrationTimer;
@property (nonatomic, copy) id notificationBlock;
@end
