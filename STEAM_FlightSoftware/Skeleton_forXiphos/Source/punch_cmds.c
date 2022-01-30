/*
Punch commands
NOOP
Reset Counters
Set STEAM Time
Copy Parameter Set
Dump Parameter Set (sends special Memory Dump Packet)
Set Full Power Mode
Set Reduced Power Mode
Set Safe Mode
Set Mode Trigger Persistence
Set Max Tries Full Power-2-Safe
Set CMD Echo Packet Enable
Issue Real-Time HK Packet
Set HK Packet Rate
Set SCI Packet Rate
Route LOG Packet
Set Contact Tx Timeout
Switch Power X123
Set I2C Timeout
Write to  NOR Flash (PROTECTED command - dual cmd)
Read from NOR Flash 
Send X123 Command
Query X123 Status (send Query Info)
Enable Dual Command
Autoset X123 Input Offset (PROTECTED command - dual cmd)
Autoset X123 Fast Threshold (PROTECTED command - dual cmd)
X123: Request Spectrum plus Status
X123: Request Diagnostic Data
Trigger Watchdog Reset
Set Last CMD Watchdog Timeout
Set detector power delay
Power Cycle STEAM (PROTECTED command - dual cmd)
*/


typedef enum{
	NOOP,
    reset_counters,
    set_STEAM_Time,
    Copy_Parameter_Set,
    Dump_Parameter_Set,
    Set_Full_Power_Mode,
    Set_Reduced_Power_Mode,
    Set_Safe_Mode,
    Set_Mode_Trigger_Persistence,
    Set_Max_Tries_Full_Power2Safe,
    Set_CMD_Echo_Packet_Enable,
    Issue_RealTime_HK_Packet,
    Set_HK_Packet_Rate,
    Set_SCI_Packet_Rate,
    Route_LOG_Packet,
    Set_Contact_Tx_Timeout,
    Switch_Power_X123,
    Set_I2C_Timeout,
    Write_to_NOR_Flash,
    Read_from_NOR_Flash,
    Send_X123_Command,
    Query_X123_Status,
    Enable_Dual_Command,
    Autoset_X123_Input_Offset,
    Autoset_X123_Fast_Threshold,
    X123_Request_Spectrum_plus_Status,
    X123_Request_Diagnostic_Data,
    Trigger_Watchdog_Reset,
    Set_Last_CMD_Watchdog_Timeout,
    Set_detector_power_delay,
    Power_Cycle_STEAM,
}punch_commands;

command_handle(punch_commands command){
    switch(command){
        case NOOP:
            NOOP();
            break;
        case reset_counters:
            reset_counters();
            break;
        case set_STEAM_Time:
            set_STEAM_Time();
            break;
        case Copy_Parameter_Set:
            Copy_Parameter_Set();
            break;
        case Copy_Parameter_Set:
            Copy_Parameter_Set();
            break;
        case Set_Full_Power_Mode:
            Set_Full_Power_Mode();
            break;
        case Set_Reduced_Power_Mode:
            Set_Reduced_Power_Mode();
            break;
        case Set_Safe_Mode:
            Set_Safe_Mode();
            break;
        case Set_Mode_Trigger_Persistence:
            Set_Mode_Trigger_Persistence();
            break;
        case Set_Max_Tries_Full_Power2Safe:
            Set_Max_Tries_Full_Power2Safe();
            break;
        case Set_CMD_Echo_Packet_Enable:
            Set_CMD_Echo_Packet_Enable();
            break;
        case Issue_RealTime_HK_Packet:
            Issue_RealTime_HK_Packet();
            break;
        case Set_HK_Packet_Rate:
            Set_HK_Packet_Rate();
            break;
        case Set_SCI_Packet_Rate:
            Set_SCI_Packet_Rate();
            break;
        case Route_LOG_Packet:
            Route_LOG_Packet();
            break;
        case Set_Contact_Tx_Timeout:
            Set_Contact_Tx_Timeout();
            break;
        case Switch_Power_X123:
            Switch_Power_X123();
            break;
        case Set_I2C_Timeout:
            Set_I2C_Timeout();
            break;
        case Write_to_NOR_Flash:
            Write_to_NOR_Flash();
            break;
        case Read_from_NOR_Flash:
            Read_from_NOR_Flash();
            break;
        case Send_X123_Command:
            Send_X123_Command();
            break;
        case Query_X123_Status:
            Query_X123_Status();
            break;
        case Enable_Dual_Command:
            Enable_Dual_Command();
            break;
        case Autoset_X123_Input_Offset:
            Autoset_X123_Input_Offset();
            break;
        case Autoset_X123_Fast_Threshold:
            Autoset_X123_Fast_Threshold();
            break;
        case X123_Request_Spectrum_plus_Status:
            X123_Request_Spectrum_plus_Status();
            break;
        case X123_Request_Diagnostic_Data:
            X123_Request_Diagnostic_Data();
            break;
        case Trigger_Watchdog_Reset:
            Trigger_Watchdog_Reset();
            break;
        case Set_Last_CMD_Watchdog_Timeout:
            Set_Last_CMD_Watchdog_Timeout();
            break;
        case Set_detector_power_delay:
            Set_detector_power_delay();
            break;
        case Power_Cycle_STEAM:
            Power_Cycle_STEAM();
            break;
    }
}




/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

NOOP(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

reset_counters(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

set_STEAM_Time(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Copy_Parameter_Set(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Dump_Parameter_Set(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_Full_Power_Mode(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_Reduced_Power_Mode(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_Safe_Mode(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_Mode_Trigger_Persistence(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_Max_Tries_Full_Power2Safe(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_CMD_Echo_Packet_Enable(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Issue_RealTime_HK_Packet(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_HK_Packet_Rate(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_SCI_Packet_Rate(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Route_LOG_Packet(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_Contact_Tx_Timeout(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Switch_Power_X123(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_I2C_Timeout(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Write_to_NOR_Flash(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Read_from_NOR_Flash(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Send_X123_Command(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Query_X123_Status(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Enable_Dual_Command(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Autoset_X123_Input_Offset(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Autoset_X123_Fast_Threshold(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

X123_Request_Spectrum_plus_Status(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

X123_Request_Diagnostic_Data(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Trigger_Watchdog_Reset(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_Last_CMD_Watchdog_Timeout(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Set_detector_power_delay(){

}

/***************************************************************************//**
 * @brief
 *   
 *
 * @details
 * 	 
 *
 * @note
 *	 
 * @param[in] variable_name
 *  
 *
 ******************************************************************************/

Power_Cycle_STEAM(){

}


